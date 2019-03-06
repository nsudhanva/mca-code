db.createCollection('pets');

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

db.pets.aggregate(

)
