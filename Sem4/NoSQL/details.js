db.createCollection('details')
db.details.insert(
    [
        {
            name: "Shubam",
            sem: 2,
            contact: {
                phone: "2352342134",
                email: "nsudhanva@gmail.com"
            },
            address: {
                permanent_address: {
                    hno: 10,
                    street: "Bangalore",
                    pincode: "234234"
                },
                current_address: {
                    hno: 10,
                    street: "Bangalore",
                    pincode: "234234"
                }
            }
        },
        {
            name: "Jeevan",
            sem: 4,
            contact: {
                phone: "2352342134",
                email: "jeevan@gmail.com"
            },
            address: {
                permanent_address: {
                    hno: 10,
                    street: "Bangalore",
                    pincode: "234234"
                },
                current_address: {
                    hno: 10,
                    street: "Bangalore",
                    pincode: "234234"
                }
            }
        },
        {
            name: "Shubam",
            sem: 2,
            contact: {
                phone: "2352342134",
                email: "nsudhanva@gmail.com"
            },
            address: {
                permanent_address: {
                    hno: 10,
                    street: "Bangalore",
                    pincode: "234234"
                },
                current_address: {
                    hno: 10,
                    street: "Bangalore",
                    pincode: "234234"
                }
            }
        }
    ]
)

// db.details.find({ hno: 12 }) doesnt work

db.details.find(
    {
        "address": {
            "permanent_address": {
                "hno": 10
            },
            "permanent_address": {
                "hno": 10
            }
        }
    }
)

db.details.find(
    {
        "contact": {
            "phone": "2352342134"
        }
    }
)

db.details.find(
    {
        "contact.phone": "2352342134"
    }
)

let insertDoc = [
    {
        name: "Sudhanva",
        sem: 2,
        contact: {
            phone: "2352342134",
            email: "nsudhanva@gmail.com"
        },
        address: {
            permanent_address: {
                hno: 10,
                street: "Bangalore",
                pincode: "234234"
            },
            current_address: {
                hno: 10,
                street: "Bangalore",
                pincode: "234234"
            }
        }
    },
    {
        name: "Jeevan",
        sem: 4,
        contact: {
            phone: "2352342134",
            email: "jeevan@gmail.com"
        },
        address: {
            permanent_address: {
                hno: 10,
                street: "Bangalore",
                pincode: "234234"
            },
            current_address: {
                hno: 10,
                street: "Bangalore",
                pincode: "234234"
            }
        }
    },
    {
        name: "Shreedhar",
        sem: 2,
        contact: {
            phone: "2352342134",
            email: "nsudhanva@gmail.com"
        },
        address: {
            permanent_address: {
                hno: 10,
                street: "Bangalore",
                pincode: "234234"
            },
            current_address: {
                hno: 10,
                street: "Bangalore",
                pincode: "234234"
            }
        }
    }
]

db.details.insert(insertDoc)