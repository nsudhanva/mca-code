// Assignment 2

// 1.	Create a collection called employee that contains id, name, salary and role.
db.createCollection('employees')

// 2.	Insert 10 documents.
db.employees.insert(
    [
        {
            name: "Sudhanva",
            salary: 40000,
            role: "CEO"
        },
        {
            name: "Shree",
            salary: 30000,
            role: "CTO"
        },
        {
            name: "Priya",
            salary: 45000,
            role: "COO"
        },
        {
            name: "Sudhanva",
            salary: 40000,
            role: "CEO"
        },
        {
            name: "Prateek",
            salary: 29000,
            role: "Developer"
        },
        {
            name: "Vijay",
            salary: 40000,
            role: "Developer"
        },
        {
            name: "Karthik",
            salary: 30000,
            role: "GG"
        },
        {
            name: "Ram",
            salary: 45000,
            role: "Intern"
        },
        {
            name: "Harsha",
            salary: 10000,
            role: "Intern"
        }
    ]
)

// 3.	Update salary of employee whose name is AAA by 8000.

db.employees.update(
    {
        name: "Harsha"
    },
    {
        $set: {
            "salary": 8000
        }    
    }
)

// 4.	Update salary of all employees by giving an increment of 4500.

db.employees.update(
    {},
    {
        $inc: {
            "salary": 4500
        }
    }
)

// 5.	Update role of ‘NNN’ as ‘Head’ and ‘Prof’.

db.employees.update(
    {
        name: "Harsha"
    },
    {
        $set: {
            role: ["head", "prof"]
        }
    }
)

// 6.	Add a new field called ‘Remark’ to the document that contains the name ‘BBB’ with the value
// ‘VC’.

db.employees.update(
    {
        name: "Karthik"
    },
    {
        $addToSet: {
            remark: "VC"
        }
    }
)

// 7.	Without inserting a document add a document with id as 11, name ‘XXX’, salary 10000, role
// ‘coach’.

db.employees.update(
    {
        name: "Jane"
    },
    {
        id: 11,
        name: "Jane",
        salary: 10000,
        role: "coach"
    },
    {
        upsert: true
    }
)

// 8.	Create a collection called restaurants that contains id, name, address – building, coordinates[latitude, longitude], street, city, zipcode, cuisine, ratings – date, grade, score
db.createCollection('restaurants')

// 9.	Insert 10 documents.
db.restaurants.insert(
    [
        {
            name: "This food",
            address: {
                building: "101",
                coordinates: [20, 30],
                street: "Bsk",
                city: "Bengaluru",
                zipcode: 560085
            },
            cuisine: "South",
            ratings: {
                date: Date(),
                grade: "A",
                score: "100"
            }
        },
        {
            name: "This food",
            address: {
                building: "101",
                coordinates: [20, 30],
                street: "Bsk",
                city: "Bengaluru",
                zipcode: 560085
            },
            cuisine: "North",
            ratings: {
                date: Date(),
                grade: "A",
                score: "100"
            }
        },
        {
            name: "This food",
            address: {
                building: "101",
                coordinates: [20, 30],
                street: "Bsk",
                city: "Bengaluru",
                zipcode: 560085
            },
            cuisine: "continental",
            ratings: {
                date: Date(),
                grade: "A",
                score: "100"
            }
        },
        {
            name: "This food",
            address: {
                building: "101",
                coordinates: [20, 30],
                street: "Bsk",
                city: "Bengaluru",
                zipcode: 560085
            },
            cuisine: "chinese",
            ratings: {
                date: Date(),
                grade: "A",
                score: "100"
            }
        },
        {
            name: "This food",
            address: {
                building: "101",
                coordinates: [20, 30],
                street: "Bsk",
                city: "Bengaluru",
                zipcode: 560085
            },
            cuisine: "chinese",
            ratings: {
                date: Date(),
                grade: "A",
                score: "100"
            }
        },
        {
            name: "This food",
            address: {
                building: "101",
                coordinates: [20, 30],
                street: "Bsk",
                city: "Bengaluru",
                zipcode: 560085
            },
            cuisine: "vietnamese",
            ratings: {
                date: Date(),
                grade: "A",
                score: "100"
            }
        },
        {
            name: "This food",
            address: {
                building: "101",
                coordinates: [20, 30],
                street: "Bsk",
                city: "Bengaluru",
                zipcode: 560085
            },
            cuisine: "all",
            ratings: {
                date: Date(),
                grade: "A",
                score: "100"
            }
        },
        {
            name: "This food",
            address: {
                building: "101",
                coordinates: [20, 30],
                street: "Bsk",
                city: "Bengaluru",
                zipcode: 560085
            },
            cuisine: "italian",
            ratings: {
                date: Date(),
                grade: "A",
                score: "100"
            }
        },
        {
            name: "This food",
            address: {
                building: "101",
                coordinates: [20, 30],
                street: "Bsk",
                city: "Bengaluru",
                zipcode: 560085
            },
            cuisine: "japanese",
            ratings: {
                date: Date(),
                grade: "A",
                score: "100"
            }
        }
    ]
)

// 10.	Display the fields id, name, cuisine for all the documents in the collection restaurant.

db.restaurants.find(
    {},
    {
        _id: 1,
        name: 1,
        cuisine: 1
    }
)

// 11.	Display all restaurants that sell ‘chinese’

db.restaurants.find(
    {
        cuisine: "chinese"
    }
)

// 12.	Find the restaurants which locate in latitude value less than - 95.754168.

db.restaurants.find(
    {},
    {
        arrayFilters: [{
            coordinates: {
                $lt: 95.754168
            }
        }]
    }
)

// 13.	Find the days on which the restaurants that sell Continental were graded.

db.restaurants.find(
    {
        cuisine: "continental"
    },
    {
        ratings: 1
    }
)