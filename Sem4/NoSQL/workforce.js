// document called as workforce that has id, name, hours and resource

db.createCollection('workforce');
db.workforce.insert(
    [
        {
            name: "Sudhanva",
            hours: 30,
            resource: "Google"
        },
        {
            name: "Prateek",
            hours: 10,
            resource: "Facebook"
        },
        {
            name: "Shreedhar",
            hours: 40,
            resource: "Apple"
        },
        {
            name: "Potato",
            hours: 10,
            resource: "Amazon"
        },
        {
            name: "Roast",
            hours: 35,
            resource: "Microsoft"
        }
    ]
    )
    
// project person name with working days
db.workforce.aggregate(
    {
        $project:
        {
            _id: 1,
            name: 1,
            days: { $divide: ["$hours", 8] }
        }
    }
)

db.workforce.aggregate(
    {
        $project:
        {
            _id: 1,
            name: 1,
            days: { $divide: ["$seconds", 3600] }
        }
    }
)

// subtract date field from current day and project the vallue and difference in terms of hours and not difference
db.books.aggregate(
    [
        {
            $group: {
                _id: "$author",
                books: {
                    $push: "$title"
                }
            }
        },
        {
            $out: "authors"
        }
    ]
)

db.products.aggregate(
    [
        {
            $group: {
                _id: "$item",
                totalAmount: {
                    $sum: {
                        $multiply: ["$price", "$quantity"]
                    }
                }
            }
        },
        {
            $out: "itembysales"
        }
    ]
)