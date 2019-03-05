// group based on item name and give maximum quantity of each item with maximum total amount
db.products.aggregate(
    [
        {
            $group: 
            {
                _id: "$item",
                totalMax: {
                    $max: { $multiply: ["$price", "$quantity"] }
                }
            }
        }
    ]
)

db.products.aggregate(
    [
        {
            $group:
            {
                _id: "$item",
                totalMin: {
                    $min: { $multiply: ["$price", "$quantity"] }
                }
            }
        }
    ]
)

// Set the discount value to 30 if quantity value greater than equal to 20
db.products.aggregate(
    [
        {
            $project:
            {
                item: 1,
                discount:
                {
                    $cond: { if: { $gte: ["$quantity", 10] }, then: 30, else: 20 }
                }
            }
        }
    ]
)

db.products.aggregate(
    [
        {
            $project:
            {
                item: 1,
                discount:
                {
                    $cond: [{ $gte: ["$quantity", 10] }, 30, 20]
                }
            }
        }
    ]
)

db.products.aggregate(
    [
        {
            $project:
            {
                item: 1,
                discount:
                {
                    $cond: [{ $gte: ["$quantity", 10] }, 30, 20]
                }
            }
        },
        {
            $out: "discount"
        }
    ]
)

db.products.aggregate({
    $project: {
        a: {
            $type: "$item"
        },
        b: {
            $type: "$price"
        }
    }
})

db.discount.renameCollection('discounts')