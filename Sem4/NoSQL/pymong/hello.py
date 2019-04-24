import datetime
from pymongo import MongoClient
conn = MongoClient()

database = conn.pes
collection = database.customers

# 1. For all customers, who stay in banashankari, set their age as age + 2

collection.update_one(
    {
        "area": "banashankari"
    },
    {
        "$inc": {
            "age": 2
        }   
    },
    upsert=True
)

collection.update_one(
    {
        "_id": "key1" 
    }, 
    {
        "$set": {
            "id": "key1"
        }
    }, 
    upsert=True
)


# 2. Given the user's choice, delete the document of a particular ID

choice = int(input("Enter the id: "))

# 3. Print the deleted document and the remaning documents

result = collection.remove(
    {
        "_id": choice
    }
)

print(result)
print(collection.find())

# 4. For all the documents, addd a new feild called as dataOfjoining and insert the dates

collection.update_one(
    {
    },
    {
        "dateOfJoining": datetime.datetime.now()   
    }
)

# 5. Display all the documents in the sorted order of the date of joining and group them by their address

query = {
    "$group" : { 
        "_id" : "$address" 
    },
    "$sort": { 
        "dateOfJoining" : 1
    } 
}

collection.aggregate(
    pipeline.query
)

# 6. Group them by their age

query = {
    "$group" : { 
        "_id" : "$age" 
    }
}

collection.aggregate(
    pipeline.query
)

# 7. Sort them alphabetically based on their names

query =  {
    "$sort": { 
        "name" : 1
    } 
}

collection.aggregate(
    pipeline.query
)