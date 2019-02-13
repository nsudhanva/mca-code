// id,username,info as embedded doc info contains title, author, pages
db.createCollection("book");
db.book.insertMany([
    {
        _id: 1,
        username: "shreedhar",
        info: [
            {
                title: "c++",
                author: "forouzan",
                pages: 400
            }
        ]
    },
    {
        _id: 2,
        username: "shreekar",
        info: [
            {
                title: "react",
                author: "oreily",
                pages: 200
            },
            {
                title: "harry potter",
                author: "j.k.rowling",
                pages: 300
            }
        ]
    }
]);
db.book.insertMany([
    {
        _id: 3,
        username: "sudhanva",
        info: [
            {
                title: "c",
                author: "kanetkar",
                pages: 400
            }
        ]
    },
    {
        _id: 4,
        username: "karthik",
        info: [
            {
                title: "data structures",
                author: "sultan",
                pages: 200
            },
            {
                title: "agent vinod",
                author: "j.k.mustafa",
                pages: 300
            }
        ]
    }
]);
