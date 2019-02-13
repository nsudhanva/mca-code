// Create a collection called as marks that consits of the fields id, isa, quiz, assignments and esa
// isa, esa individual, quiz and assingments are array

db.createCollection('marks');

db.marks.insert(
    [
        {
            isa: 100,
            esa: 95,
            quiz: [20, 10, 15, 20],
            assingments: [40, 30, 20, 10]
        },
        {
            isa: 75,
            esa: 99,
            quiz: [34, 14, 12, 26],
            assingments: [60, 40, 23, 13]
        },
        {
            isa: 67,
            esa: 56,
            quiz: [40, 89, 56, 12],
            assingments: [10, 20, 30, 40]
        },
        {
            isa: 90,
            esa: 99,
            quiz: [20, 10, 15, 20],
            assingments: [60, 80, 70, 50]
        }
    ]
)

// Quiz totals, assingment totals of each student

db.marks.aggregate(
    {
        $project: {
            _id: 1,
            quiz: 1,
            assignments: 1,
            esa: 1,
            isa: 1,
            quizTotal: {
                $sum: "$quiz"
            },
            assignmentsTotal: {
                $sum: "$assignments"
            },
            fullTotal: {
                $sum: ["$isa", "$esa", { $sum: "$assignments" }, { $sum: "$quiz"}]
            }
        }
    }
)

db.marks.updateMany({}, { $rename: { "assingments": "assignments" } })
