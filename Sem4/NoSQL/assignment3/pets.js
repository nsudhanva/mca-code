db.createCollection('pets');

// { "ok" : 1 }

db.pets.insert(
    [
        {
            name: "Sudhanva",
            age: 24,
            pets: [
                {
                    petname: "Prateek",
                    petage: 5,
                    pettype: "Dog"
                },
                {
                    petname: "Shubam",
                    petage: 2,
                    pettype: "Cat"
                }
            ]
        },
        {
            name: "Karthik",
            age: 23,
            pets: [
                {
                    petname: "Shubam",
                    petage: 2,
                    pettype: "Cat"
                }
            ]
        },
        {
            name: "Harsha",
            age: 22,
            pets: [
                {
                    petname: "Shreedhar",
                    petage: 2,
                    pettype: "Cat"
                }
            ]
        },
        {
            name: "Kiran",
            age: 20,
            pets: [
                {
                    petname: "Chandra",
                    petage: 6,
                    pettype: "Dog"
                },
                {
                    petname: "Shreedhar",
                    petage: 2,
                    pettype: "Cat"
                }
            ]
        },
        {
            name: "Abhiram",
            age: 26,
            pets: [
                {
                    petname: "Rakesh",
                    petage: 6,
                    pettype: "Dog"
                }
            ]
        },
        {
            name: "Raj",
            age: 24,
            pets: [
                {
                    petname: "Tom",
                    petage: 6,
                    pettype: "Dog"
                },
                {
                    petname: "Shreedhar",
                    petage: 2,
                    pettype: "Cat"
                }
            ]
        },
        {
            name: "Daya",
            age: 24,
            pets: [
                {
                    petname: "GG",
                    petage: 1,
                    pettype: "Dog"
                },
                {
                    petname: "Shreedhar",
                    petage: 2,
                    pettype: "Cat"
                },
                {
                    petname: "Yolo",
                    petage: 3,
                    pettype: "Cat"
                }
            ]
        },
        {
            name: "Jeevan",
            age: 24,
            pets: [
                {
                    petname: "Yolo",
                    petage: 3,
                    pettype: "Cat"
                }
            ]
        },
        {
            name: "Aashay",
            age: 24,
            pets: [
                {
                    petname: "Snoop",
                    petage: 6,
                    pettype: "Dog"
                },
                {
                    petname: "Yolo",
                    petage: 3,
                    pettype: "Cat"
                }
            ]
        }
    ]
)

/*
BulkWriteResult({
        "writeErrors" : [ ],
        "writeConcernErrors" : [ ],
        "nInserted" : 9,
        "nUpserted" : 0,
        "nMatched" : 0,
        "nModified" : 0,
        "nRemoved" : 0,
        "upserted" : [ ]
})
*/

db.pets.find({ "pets.pettype": "Cat" }).count()

// 8

db.pets.find({ pets: { $exists: true }, $where: 'this.pets.length > 2' })

/*
 { "_id" : ObjectId("5c7f4fcfc65811c969ae9843"), "name" : "Daya", "age" : 24, "pets" : [ { "petname" : "GG", "petage" : 1, "pettype" : "Dog" },
{ "petname" : "Shreedhar", "petage" : 2, "pettype" : "Cat" }, { "petname" : "Yolo", "petage" : 3, "pettype" : "Cat" } ] }
*/

db.pets.find({ "pets.pettype": "Dog" }).limit(2)

/*
{ "_id" : ObjectId("5c7f4fcfc65811c969ae983d"), "name" : "Sudhanva", "age" : 24, "pets" : [ { "petname" : "Prateek", "petage" : 5, "pettype" :
"Dog" }, { "petname" : "Shubam", "petage" : 2, "pettype" : "Cat" } ] }
{ "_id" : ObjectId("5c7f4fcfc65811c969ae9840"), "name" : "Kiran", "age" : 20, "pets" : [ { "petname" : "Chandra", "petage" : 6, "pettype" : "Dog" }, { "petname" : "Shreedhar", "petage" : 2, "pettype" : "Cat" } ] }
*/

db.pets.find({ "pets.pettype": "Dog" }, { _id: 1, 'pets.$': 1 }) 

/*
{ "_id" : ObjectId("5c7f4fcfc65811c969ae983d"), "pets" : [ { "petname" : "Prateek", "petage" : 5, "pettype" : "Dog" } ] }
{ "_id" : ObjectId("5c7f4fcfc65811c969ae9840"), "pets" : [ { "petname" : "Chandra", "petage" : 6, "pettype" : "Dog" } ] }
{ "_id" : ObjectId("5c7f4fcfc65811c969ae9841"), "pets" : [ { "petname" : "Rakesh", "petage" : 6, "pettype" : "Dog" } ] }
{ "_id" : ObjectId("5c7f4fcfc65811c969ae9842"), "pets" : [ { "petname" : "Tom", "petage" : 6, "pettype" : "Dog" } ] }
{ "_id" : ObjectId("5c7f4fcfc65811c969ae9843"), "pets" : [ { "petname" : "GG", "petage" : 1, "pettype" : "Dog" } ] }
{ "_id" : ObjectId("5c7f4fcfc65811c969ae9845"), "pets" : [ { "petname" : "Snoop", "petage" : 6, "pettype" : "Dog" } ] }
*/