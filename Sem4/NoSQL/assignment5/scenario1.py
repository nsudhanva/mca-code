import datetime
from pymongo import MongoClient
conn = MongoClient()

database = conn.pes
collection = database.students

# 1

collection.insert_many([
    {
        "name": "Sudhanva",
        "SRN": "123",
        "sem": 4,
        "class": "S",
        "isa": 400,
        "ca": {
            "type": "assignment",
            "marks": 35
        }
    },
    {
        "name": "Shreedhar",
        "SRN": "124",
        "sem": 4,
        "class": "S",
        "isa": 450,
        "ca": {
            "type": "quiz",
            "marks": 45
        }
    },
    {
        "name": "Shubam",
        "SRN": "125",
        "sem": 4,
        "class": "S",
        "isa": 500,
        "ca": {
            "type": "assignment",
            "marks": 55
        }
    },
    {
        "name": "Prateek",
        "SRN": "126",
        "sem": 4,
        "class": "S",
        "isa": 200,
        "ca": {
            "type": "assignment",
            "marks": 65
        }
    },
    {
        "name": "Rexi",
        "SRN": "127",
        "sem": 4,
        "class": "S",
        "isa": 400,
        "ca": {
            "type": "assignment",
            "marks": 15
        }
    },
    {
        "name": "Aaakash",
        "SRN": "128",
        "sem": 4,
        "class": "S",
        "isa": 450,
        "ca": {
            "type": "quiz",
            "marks": 45
        }
    },
    {
        "name": "Supriya",
        "SRN": "129",
        "sem": 4,
        "class": "S",
        "isa": 300,
        "ca": {
            "type": "assignment",
            "marks": 100
        }
    },
    {
        "name": "Sanmitha",
        "SRN": "130",
        "sem": 4,
        "class": "S",
        "isa": 500,
        "ca": {
            "type": "quiz",
            "marks": 70
        }
    },
    {
        "name": "Kumar",
        "SRN": "123",
        "sem": 4,
        "class": "S",
        "isa": 100,
        "ca": {
            "type": "assignment",
            "marks": 90
        }
    }
])

# 2
collection.find(
    {},
    {
        "ca.type": "assignment",
        "ca.marks": {
            "$gt": 30
        }
    }
)

# 3
query = {
    "$sort": { 
        "isa" : 1,
        "ca.type": 1
    } 
}


collection.aggregate(
    pipeline.query
)

# 4
query = {
    "$group" :
    {
        "_id": "$name"
        "totalMarks": { "$sum": "$ca.marks" } },
    }
}

collection.aggregate(
    pipeline.query
)

# 5
collection.update_many(
    {
    },
    {
        "$inc": {
            "sem": 1
        }   
    }
)