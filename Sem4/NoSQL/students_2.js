//  Student db 
//  id, name, semester, marks: []

db.createCollection('studentsAnother')
db.studentsAnother.insert(
    [
        {
            name: "Shreedhar",
            semester: 4,
            marks: [10,20,30,40,50]
        },
        {
            name: "Bond",
            semester: 4,
            marks: [30,40,50,30,60]
        },
        {
            name: "Prateek",
            semester: 4,
            marks: [60,20,40,50,10]
        }
    ]
)

db.studentsAnother.find(
    {
        marks: {
            $in : [50]
        }
    }
)

db.studentsAnother.find(
    {
        marks: {
            $nin: [70]
        }
    }
)

db.studentsAnother.find(
    {
        marks: {
            $in: [60, 10]
        }
    }
)