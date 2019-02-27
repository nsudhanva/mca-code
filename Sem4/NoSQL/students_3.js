// create a collection as students
// find student who has atleast one mark greater than 80
// call this collection as student distinction
// it should contain id, name, semester

db.students.aggregate(
    [
        {
            $group:
            {
                _id: "$name",
                marks: {
                    $push: "$marks"
                }
            }
        },
        {
            $out: "student_distinction"
        }
    ]
)

// Filter out the names of the students who has less than 50 in marks
db.member.aggregate([
    {
        "$group": {
            "_id": { "user": "$user", "email": "$email" },
            "count": { "$sum": 1 }
        }
    },
    { "$match": { "count": { "$gte": 1 } } }
])

db.students.aggregate([
{
    $project:
    {
        name: 1, marks:
        {
            $filter:
            {
                input: "$marks", as: "marks", cond: { $lt: ["$$marks", 50] }
            }
        }
    }
}])