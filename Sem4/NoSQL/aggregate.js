db.createCollection('sample');
db.sample.insert(
    [
        {
            _id: 1,
            value: 9.75
        },
        {
            _id: 2,
            value: 7.75
        },
        {
            _id: 3,
            value: 4.65
        },
        {
            _id: 4,
            value: 8.25
        },
        {
            _id: 5,
            value: 8.25
        }
    ]
)

db.sample.aggregate(
    {
        $project: {
            "Ceiled Value": {
                $ceil: "$value"
            }
        }
    }
)

db.sample.aggregate(
    {
        $project: {
            "Floored Value": {
                $floor: "$value"
            }
        }
    }
)

// Using aggregation function, project all the item names whose quantity is greater than 100
// Create a field called as status that shows the comparision

db.products.aggregate(
    [
        {
            $project:
            {
                _id: 0,
                item: 1,
                quantity: 1,
                cmpTo: {
                    $cmp:
                        [
                            "$quantity", 20
                        ]
                },
            }
        }
    ]
)

db.products.aggregate(
    [
        {
            $project:
            {
                _id: 0,
                item: 1,
                quantity: 1,
                cmpTo: {
                    $cmp:
                        [
                            "$item", "Mobile"
                        ]
                },
            }
        }
    ]
)

db.products.aggregate(
    {
        $project:
        {
            _id: 0,
            item: 1,
            quantity: 1,
            cmpTo: {
                $cmp:
                    [
                        "$item", "Mobile"
                    ]
            },
        }
    }
)

// Group the document of sales based on the year and compute the total amount of quantity

db.products.aggregate(
    [
        {
            $group:
            {
                _id: { day: { $dayOfYear: "$date" }, year: { $year: "$date" } },
                totalAmount: { $sum: { $multiply: ["$price", "$quantity"] } },
                count: { $sum: 1 }
            }
        }
    ]
)

db.products.aggregate(
    [
        {
            $group:
            {
                _id: { name: "$item" },
                count: { $sum: 1 }
            }
        }
    ]
)

db.products.aggregate(
    [
        {
            $group:
            {
                _id: { name: "$item" },
                totalAmount: { $sum: { $multiply: ["$price", "$quantity"] } }
            }
        }
    ]
)
