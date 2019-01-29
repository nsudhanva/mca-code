//  create collection called users, id, status, last modified
db.createCollection('users')
db.users.insert(
    [
        {
            status: "online",
            last_modified: ISODate("2012-07-14T01:00:00+01:00")
        },
        {
            status: "offline",
            last_modified: ISODate()
        },
        {
            status: "offline",
            last_modified: Date()
        }
    ]
)

// 2012-07-14T01:00:00+01:

db.users.update(
    { 
        "_id": ObjectId("5c495a47313742c524897e0c")
    },
    {
        $set: {
            status: "logout"
        }
    }
)