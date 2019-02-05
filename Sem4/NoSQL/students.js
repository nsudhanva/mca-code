// use mca
db

// show dbs
db.dropDatabase()
db.createCollection("students")

// autoIndex, size
db.createCollection("teachers", { capped: true, size: 21313123, max: 5000 })
db.students.insert({ "name": "Shreedhar" })
db.students.insert({ "name": "Rexi", "sem": 4 })
db.students.insert({ "name": "Shubam", "sem": 4, "marks": { "sub1": 10, "sub2": 100, "sub3": 300 } })

// Only insert
db.students.insertOne([{ "name": "Chirag" }])
db.students.insert([{ "name": "Chirag" }, { "name": "Harshit" }])
db.students.insert([{ "name": "Chirag" }, { "name": "Harshit" }], { ordered: false })
db.students.insertMany([{ "name": "Chirag" }, { "name": "Harshit" }], { ordered: false })

// Update or Create existing
db.students.save([{ "name": "Chirag" }, { "name": "Harshit" }], { ordered: false })

// Find
db.students.find()
db.students.find().pretty()
db.students.find(
    {}, { name: "Shreedhar" }
)

db.students.find(
    { name: "Shreedhar" }
)

db.students.find({}, { name: 1, _id: 0 })

db.students.update({ "name": "Shreedhar" }, { "marks": { "sub1": 10, "sub2": 100, "sub3": 300, "sub4": 400 } })
db.students.update({ "name": "Shreedhar" }, {} , { "marks": { "sub1": 10, "sub2": 100, "sub3": 300, "sub4": 400 } })
db.students.replaceOne({ "name": "Shreedhar" }, { "marks": { "sub1": 10, "sub2": 100, "sub3": 300, "sub4": 400 } })

db.students.update(
    { 
        "name": "Rexi"
    },
    {
        $inc: {
            "sem": 4 
        }
    }
)

db.students.update(
    {
        "name": "Rexi"
    },
    {
        $inc: {
            "sem": -2
        }
    }
)

db.students.update(
    {
        "name": "Shubam"
    }
)

// $min
// $max
// $mul
// $setOnInsert

db.students.update(
    {
        name: "Rexi"
    },
    {
        $unset: {
            "sem": ""
        }
    }
)

db.students.update(
    {
        name: "Rexi"
    },
    {
        $set: {
            "marks": [10, 20, 30]
        }
    }
)

// Update the marks of the first student and replace his existing marks of with 90
// In the entire collection, wherever the marks is 50, replace it with 60

db.students.update(
    {
        name: "Rexi",
        marks : 10
    },
    {
        $set: {
            "marks.$": 90
        }
    }
)

db.students.update(
    {
        name: "Rexi"
    },
    {
        $inc: {
            "marks.$[]": 20
        }
    }
)

db.students.update(
    {},
    {
        $inc: {
            "marks.$[]": 20
        }
    },
    {
        multi: true
    }
)

db.students.update(
    {
        name: "Rexi"
    },
    {
        $set: {
            "marks.$[ele]": 80
        }
    },
    {
        multi: true,
        arrayFilters: [{
            "ele": {
                $lt: 80
            }
        }]
    }
)

// If the marks of any students is less than 50, update it to 55

// Add to existing collection of arrays non unique

db.students.update(
    {
        "name": "Sudhanva"
    },
    {
        $addToSet: {
            marks: 85
        }
    }
)

// -1 is first, +1 is the last
db.students.update(
    {
        "name": "Sudhanva"
    },
    {
        $pop: {
            marks: -1
        }
    }
)

db.students.update(
    {
        "name": "Sudhanva"
    },
    {
        $push: {
            marks: 35
        }
    }
)

db.students.update(
    {
        "name": "Sudhanva"
    },
    {
        $pull: {
            marks: {
                $lt: 90
            }
        }
    }
)