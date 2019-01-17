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