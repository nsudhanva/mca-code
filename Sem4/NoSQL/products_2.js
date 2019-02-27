// group sales collection based on year and sum up total amount which in price * qty

db.products.aggregate(
    [
        {
            $group: {
                _id: "$year",
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