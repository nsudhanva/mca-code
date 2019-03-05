// project lab marks, isa marks, esa marks

db.createCollection('student_marks');

db.student_marks.insert(
    [
        {
            name: "Shreedhar",
            semester: 4,
            marks: [10, 20, 30, 40, 50],
            quiz: [20, 30, 40, 20, 50]
        },
        {
            name: "Bond",
            semester: 4,
            marks: [30, 40, 50, 30, 60],
            quiz: [20, 30, 40, 10, 50]
        },
        {
            name: "Prateek",
            semester: 4,
            marks: [60, 20, 40, 50, 10],
            quiz: [20, 30, 40, 50, 40]
        }
    ]
)

db.student_marks.aggregate([
    {
        $project: {
            quizMax: { $max: "$quiz" },
            totalMax: { $max: "$marks" },
            examMax: { $max: [{ $max: "$marks" }, { $max: "$quiz" }] }
        }
    }
])

db.student_marks.aggregate([
    {
        $group: {
            _id: "$name",
            quizMax: { $max: "$quiz" },
            totalMax: { $max: "$marks" },
            // examMax: { $max: ["$marks", "$quiz"] }
        }
    }
])

db.student_marks.aggregate([
    {
        $project: {
            quizMax: { $max: "$quiz" },
            totalMax: { $max: "$marks" },
            examMax: { $max: [{ $max: "$marks" }, { $max: "$quiz" }] },
            minMarks: { $min: { $max: [{ $max: "$marks" }, { $max: "$quiz" }] }}
        }
    }
])