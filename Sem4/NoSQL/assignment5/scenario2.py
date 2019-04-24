import datetime
from pymongo import MongoClient
conn = MongoClient()

database = conn.pes
collection = database.movie

# 1

collection.insert_many([
    {
        "title": "Avatar",
        "writer": "James Cameron",
        "year": 2009,
        "franchise": "Avatar",
        "actors": [
            {
                "name": "Zoe"
            },
            {
                "name": "Sam"
            }
        ]
    },
    {
        "title": "Titanic",
        "writer": "James Cameron",
        "year": 1997,
        "franchise": "Titanic",
        "actors": [
            {
                "name": "Leo"
            },
            {
                "name": "kate"
            }
        ]
    },
    {
        "title": "Star Wars: The Force Awakens",
        "writer": "J J Abrams",
        "year": 2015,
        "franchise": "Star Wars",
        "actors": [
            {
                "name": "Ford"
            },
            {
                "name": "Natalie"
            }
        ]
    },
    {
        "title": "Avengers: Infinity War",
        "writer": "Joe Russo",
        "year": 2018,
        "franchise": "Avengers",
        "actors": [
            {
                "name": "RDJ"
            },
            {
                "name": "Chris"
            }
        ]
    },
    {
        "title": "Jurrasic World",
        "writer": "Steven Speilberg",
        "year": 2015,
        "franchise": "Jurrasic Park",
        "actors": [
            {
                "name": "Chris"
            },
            {
                "name": "Bryce"
            }
        ]
    },
    {
        "title": "The Avengers",
        "writer": "Joe Russo",
        "year": 2012,
        "franchise": "Avengers",
        "actors": [
            {
                "name": "RDJ"
            },
            {
                "name": "Chris"
            }
        ]
    },
    {
        "title": "Harry Potter and the Deathy Hallows: Part 2",
        "writer": "JK Rowling",
        "year": 2011,
        "franchise": "Harry Potter",
        "actors": [
            {
                "name": "Daniel"
            },
            {
                "name": "Emma"
            }
        ]
    },
    {
        "title": "Harry Potter and the Deathy Hallows: Part 1",
        "writer": "JK Rowling",
        "year": 2010,
        "franchise": "Harry Potter",
        "actors": [
            {
                "name": "Daniel"
            },
            {
                "name": "Emma"
            }
        ]
    },
    {
        "title": "Black Panther",
        "writer": "Stan Lee",
        "year": 2018,
        "franchise": "Avengers",
        "actors": [
            {
                "name": "Chadwick"
            },
            {
                "name": "Letita"
            }
        ]
    },

])

# 2
collection.find(
    {
    },
    {
        "writer": "Quentin Tarantino"
    }
)

# 3
collection.find(
    {
    },
    {
        "$each": {
            "actors.name": "Brad Pitt"
        }
    }
)

# 4
collection.find(
    {
    },
    {
        "franchise": "Harry Potter"
    }
)

# 5
collection.find(
    {},
    {
        "year": {
            "$lt": 2000
            "$gt": 1989
        }
    }
)

# 6
collection.find(
    {
        "$or": [
            "year": {
            "$lt": 2000
            },
            "year": {
                "$gt": 2010
            }
        ]
    }
)