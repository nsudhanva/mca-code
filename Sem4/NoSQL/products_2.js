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

// create an output collection of the sales data where you have name, id and total amount where price * qty and name it as sales details
// from this output collection if the amount is greater than 1000, too costly, (amount is between 750 and 1000) should be reduced
// 500 and 750 can be reduced

db.students.aggregate([{
    $project:
    {
        name: 1,
        summary:
        {
            $switch:
            {
                branches: [
                    { case: { $gte: [{ $avg: "$marks" }, 60] }, then: "good" },
                    { case: { $lt: [{ $avg: "$marks" }, 45] }, then: "can do better" }
                ],
                default: "no scores found"
            }
        }
    }
}])