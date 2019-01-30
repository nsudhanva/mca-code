/* 
1. Create a collection called Employee containing the following fields – id, emp_code,
emp_name.doj(date of join), salary  
*/

db.createCollection('employees');

/*
Output:
{ "ok" : 1 }

*/
// -------------------------------------------------------------------------------------------------------
/* 
2. Insert 5 documents
*/
db.employees.insert(
    [
        {
            emp_name: "Sudhanva",
            emp_code: "1234",
            salary: 10000,
            doj: Date()
        },
        {
            emp_name: "Shubam",
            emp_code: "1235",
            salary: 20000,
            doj: Date()
        },
        {
            emp_name: "Shreedhar",
            emp_code: "1236",
            salary: 25000,
            doj: Date()
        },
        {
            emp_name: "Prateek",
            emp_code: "1237",
            salary: 45000,
            doj: Date()
        },
        {
            emp_name: "Rexi",
            emp_code: "1238",
            salary: 23400,
            doj: Date()
        },
    ]
);

/* 
Output:

BulkWriteResult({
        "writeErrors" : [ ],
        "writeConcernErrors" : [ ],
        "nInserted" : 5,
        "nUpserted" : 0,
        "nMatched" : 0,
        "nModified" : 0,
        "nRemoved" : 0,
        "upserted" : [ ]
})

*/
// -------------------------------------------------------------------------------------------------------
/* 
3. Display the _id, emp_code and emp_name in the output document
*/

db.employees.find()

/* 
Output:

{ "_id" : ObjectId("5c5114c9aaf35b69c46b7bc1"), "emp_name" : "Sudhanva", "emp_code" : "1234", "doj" : "Wed Jan 30 2019 08:36:49 GMT+0530 (India Standard Time)" }{ "_id" : ObjectId("5c5114c9aaf35b69c46b7bc2"), "emp_name" : "Shubam", "emp_code" : "1235", "doj" : "Wed Jan 30 2019 08:36:49 GMT+0530 (India Standard Time)" }
{ "_id" : ObjectId("5c5114c9aaf35b69c46b7bc3"), "emp_name" : "Shreedhar", "emp_code" : "1236", "doj" : "Wed Jan 30 2019 08:36:49 GMT+0530 (India Standard Time)" }
{ "_id" : ObjectId("5c5114c9aaf35b69c46b7bc4"), "emp_name" : "Prateek", "emp_code" : "1237", "doj" : "Wed Jan 30 2019 08:36:49 GMT+0530 (India Standard Time)" }
{ "_id" : ObjectId("5c5114c9aaf35b69c46b7bc5"), "emp_name" : "Rexi", "emp_code" : "1238", "doj" : "Wed Jan 30 2019 08:36:49 GMT+0530 (India Standard Time)" }

*/
// -------------------------------------------------------------------------------------------------------
/* 
4. Insert embedded document called deduction that consists of pf, pt it to another 5 documents 
*/

db.employees.insert(
    [
        {
            emp_name: "Rahul",
            emp_code: "1234",
            salary: 10000,
            doj: Date(),
            deduction: {
                pf: 2000,
                pt: 1000
            }
        },
        {
            emp_name: "Akheeb",
            emp_code: "1235",
            salary: 20000,
            doj: Date(),
            deduction: {
                pf: 2000,
                pt: 1000
            }
        },
        {
            emp_name: "Kiran",
            emp_code: "1236",
            salary: 25000,
            doj: Date(),
            deduction: {
                pf: 2000,
                pt: 1000
            }
        },
        {
            emp_name: "Chandra",
            emp_code: "1237",
            salary: 45000,
            doj: Date(),
            deduction: {
                pf: 2000,
                pt: 1000
            }
        },
        {
            emp_name: "Rakesh",
            emp_code: "1238",
            salary: 23400,
            doj: Date(),
            deduction: {
                pf: 2000,
                pt: 1000
            }
        },
    ]
);

/* 
Output:

BulkWriteResult({
        "writeErrors" : [ ],
        "writeConcernErrors" : [ ],
        "nInserted" : 5,
        "nUpserted" : 0,
        "nMatched" : 0,
        "nModified" : 0,
        "nRemoved" : 0,
        "upserted" : [ ]
})

*/
// -------------------------------------------------------------------------------------------------------
/* 
5. Display the _id and deduction detail of pf in the output document
 */

db.employees.find({
    "deduction": { $exists: true }
});

/*  

Output:

{ "_id" : ObjectId("5c5118eeaaf35b69c46b7bcb"), "emp_name" : "Rahul", "emp_code" : "1234", "salary" : 10000, "doj" : "Wed Jan 30 2019 08:54:30 GMT+0530 (India Standard Time)", "deduction" : { "pf" : 2000, "pt" : 1000 } }
{ "_id" : ObjectId("5c5118eeaaf35b69c46b7bcc"), "emp_name" : "Akheeb", "emp_code" : "1235", "salary" : 20000, "doj" : "Wed Jan 30 2019 08:54:30 GMT+0530 (India Standard Time)", "deduction" : { "pf" : 2000, "pt" : 1000 } }
{ "_id" : ObjectId("5c5118eeaaf35b69c46b7bcd"), "emp_name" : "Kiran", "emp_code" : "1236", "salary" : 25000, "doj" : "Wed Jan 30 2019 08:54:30 GMT+0530 (India Standard Time)", "deduction" : { "pf" : 2000, "pt" : 1000 } }
{ "_id" : ObjectId("5c5118eeaaf35b69c46b7bce"), "emp_name" : "Chandra", "emp_code" : "1237", "salary" : 45000, "doj" : "Wed Jan 30
2019 08:54:30 GMT+0530 (India Standard Time)", "deduction" : { "pf" : 2000, "pt" : 1000 } }
{ "_id" : ObjectId("5c5118eeaaf35b69c46b7bcf"), "emp_name" : "Rakesh", "emp_code" : "1238", "salary" : 23400, "doj" : "Wed Jan 30 2019 08:54:30 GMT+0530 (India Standard Time)", "deduction" : { "pf" : 2000, "pt" : 1000 } }

*/
// -------------------------------------------------------------------------------------------------------
/* 
6. . Include the day, month and year taken from doj, emp_code, pf and salary
*/

db.employees.find(
    {
        "doj": {
            $eq: "Wed Jan 30 2019 08:52:06 GMT+0530 (India Standard Time)"
        }
    } 
);

/* 

Output:

{ "_id" : ObjectId("5c51185eaaf35b69c46b7bc6"), "emp_name" : "Sudhanva", "emp_code" : "1234", "salary" : 10000, "doj" : "Wed Jan 30 2019 08:52:06 GMT+0530 (India Standard Time)" }
{ "_id" : ObjectId("5c51185eaaf35b69c46b7bc7"), "emp_name" : "Shubam", "emp_code" : "1235", "salary" : 20000, "doj" : "Wed Jan 30 2019 08:52:06 GMT+0530 (India Standard Time)" }
{ "_id" : ObjectId("5c51185eaaf35b69c46b7bc8"), "emp_name" : "Shreedhar", "emp_code" : "1236", "salary" : 25000, "doj" : "Wed Jan 30 2019 08:52:06 GMT+0530 (India Standard Time)" }
{ "_id" : ObjectId("5c51185eaaf35b69c46b7bc9"), "emp_name" : "Prateek", "emp_code" : "1237", "salary" : 45000, "doj" : "Wed Jan 30
2019 08:52:06 GMT+0530 (India Standard Time)" }
{ "_id" : ObjectId("5c51185eaaf35b69c46b7bca"), "emp_name" : "Rexi", "emp_code" : "1238", "salary" : 23400, "doj" : "Wed Jan 30 2019 08:52:06 GMT+0530 (India Standard Time)" }

*/
// -------------------------------------------------------------------------------------------------------
/* 
7. Display the documents that have the salary equal to 90000
*/

db.employees.find(
    {
        "salary":{
            $gte: 90000
        }
    }
)

/* 

Output:

{ "_id" : ObjectId("5c5118eeaaf35b69c46b7bce"), "emp_name" : "Chandra", "emp_code" : "1237", "salary" : 90000, "doj" : "Wed Jan 30
2019 08:54:30 GMT+0530 (India Standard Time)", "deduction" : { "pf" : 2000, "pt" : 1000 } }
{ "_id" : ObjectId("5c5118eeaaf35b69c46b7bcf"), "emp_name" : "Rakesh", "emp_code" : "1238", "salary" : 100000, "doj" : "Wed Jan 30
2019 08:54:30 GMT+0530 (India Standard Time)", "deduction" : { "pf" : 2000, "pt" : 1000 } }

*/
// -------------------------------------------------------------------------------------------------------
/*  
8. Select the documents where the salary is greater than 9000 and less than or equal to 12000
*/
db.employees.find(
    {
        salary: {
            $gt: 9000,
            $lte: 12000
        }   
    }
);

/* 

Output:

{ "_id" : ObjectId("5c51185eaaf35b69c46b7bc6"), "emp_name" : "Sudhanva", "emp_code" : "1234", "salary" : 10000, "doj" : "Wed Jan 30 2019 08:52:06 GMT+0530 (India Standard Time)" }
{ "_id" : ObjectId("5c5118eeaaf35b69c46b7bcb"), "emp_name" : "Rahul", "emp_code" : "1234", "salary" : 10000, "doj" : "Wed Jan 30 2019 08:54:30 GMT+0530 (India Standard Time)", "deduction" : { "pf" : 2000, "pt" : 1000 } }

*/
// -------------------------------------------------------------------------------------------------------
/*
9. Add another collection called dependents consisting of emp_id, dep_id, no. of dependents,
age of dependents.
*/

db.createCollection('departments');

db.departments.insert(
    [
        {
            emp_id: "1112",
            dep_id: "asdg",
            no_of_dependents: 2,
            age: 50
        },
        {
            emp_id: "1113",
            dep_id: "aetnhesa",
            no_of_dependents: 2,
            age: 70
        },
        {
            emp_id: "1114",
            dep_id: "aEFASFB",
            no_of_dependents: 2,
            age: 40
        },
        {
            emp_id: "1115",
            dep_id: "ewrhtdahf",
            no_of_dependents: 2,
            age: 30
        },
        {
            emp_id: "1116",
            dep_id: "ADHSeaTRHE",
            no_of_dependents: 2,
            age: 40
        }
    ]
)

/* 

Output:

{ "ok" : 1 }

BulkWriteResult({
        "writeErrors" : [ ],
        "writeConcernErrors" : [ ],
        "nInserted" : 5,
        "nUpserted" : 0,
        "nMatched" : 0,
        "nModified" : 0,
        "nRemoved" : 0,
        "upserted" : [ ]
})

*/
// -------------------------------------------------------------------------------------------------------
/*
10. If the age of dependents is more than 60 years create a new collection called insurance
consisting of insurance_id, emp_id, insurance_date, insurance_type and amount of premium.
*/

db.createCollection('insurance')

db.departments.find(
    {
        age: {
            $gt: 60
        }
    }
)

db.insurance.insert(
    {
        insurance: {
            insurance_id: 1234,
            emp_id: "1113",
            insurance_date: Date(),
            insurance_type: "Old",
            insurance_premium: 1000,
        }
    }
)

db.insurance.find()

/* 

Output:

{ "_id" : ObjectId("5c51237564ef8c824084ae16"), "insurance" : { "insurance_id" : 1234, "emp_id" : "1113", "insurance_date" : "Wed Jan 30 2019 09:39:25 GMT+0530 (India Standard Time)", "insurance_type" : "Old", "insurance_premium" : 1000 } }

*/
// -------------------------------------------------------------------------------------------------------
/*
11. If the age of dependents is less than 25, add another collection called education consisting of
emp_id, children_id, education_institute, fees
*/

db.createCollection('education')

db.departments.find(
    {
        age: {
            $lt: 25
        }
    }
)

db.education.insert(
    {
        insurance: {
            emp_id: "1113",
            children_id: "23234",
            education_institute: "PES",
            fees: 23423
        }
    }
)

/*

Output:

{ "_id" : ObjectId("5c511e7b64ef8c824084ae13"), "emp_id" : "1115", "dep_id" : "ewrhtdahf", "no_of_dependents" : 2, "age" : 20 }

*/
// -------------------------------------------------------------------------------------------------------