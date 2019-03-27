db.createCollection('restaurants')

db.restaurants.insert([
	{
		name: "Meghana",
		cuisine: "Biriyani",
		star: "5",
		locality: "Jayanagar",
		grade: {
			date: Date(),
			grade: "A",
			score: 90		
		}
	},
	{
		name: "Empire",
		cuisine: "North",
		star: "3",
		locality: "Indiranagar",
		grade: {
			date: Date(),
			grade: "A",
			score: 100		
		}
	},
	{
		name: "Sagar",
		cuisine: "South",
		star: "2",
		locality: "Vijaynagar",
		grade: {
			date: Date(),
			grade: "A",
			score: 50		
		}
	},
	{
		name: "Sri",
		cuisine: "South",
		star: "5",
		locality: "Rajajinagar",
		grade: {
			date: Date(),
			grade: "A",
			score: 30		
		}
	},
	{
		name: "Satvam",
		cuisine: "South",
		star: "5",
		locality: "Bengaluru",
		grade: {
			date: Date(),
			grade: "A",
			score: 45		
		}
	},
	{
		name: "Vinnys",
		cuisine: "Italian",
		star: "5",
		locality: "Banashakari",
		grade: {
			date: Date(),
			grade: "A",
			score: 85		
		}
	},
	{
		name: "Taaza",
		cuisine: "Breakfast",
		star: "5",
		locality: "Banashankari",
		grade: {
			date: Date(),
			grade: "A",
			score: 100		
		}
	},
	{
		name: "Ayodhya",
		cuisine: "North",
		star: "5",
		locality: "Banashakari",
		grade: {
			date: Date(),
			grade: "A",
			score: 90		
		}
	},
	{
		name: "Rajathadri",
		cuisine: "South",
		star: "5",
		locality: "Uttarahalli",
		grade: {
			date: Date(),
			grade: "A",
			score: 80		
		}
	}
])

db.restaurants.update(
    {
        locality: "Jayanagar",
		star: "3"
    },
    {
        $set: {
            star: "5"
        }
    }
)

db.restaurants.update(
	{},
    {
        "grade.grade": "A",
    },
    {
        $set: {
        	"grade.grade": "B"
        }
    }
)


db.restaurants.find(
	{},
	{
		_id: 1,
		name: 1,
		cuisine: 1
	}
)

db.restaurants.find(
	{
		locality: "Rajajinagar"
	}
).limit(5)

db.restaurants.aggregate(
   [
     	{
     		$project: {
	          	remainder: {
	          		$mod: ["$grade.score", 7]
	          	},
	          	_id: 1,
	          	name: 1,
	          	grade: 1,
      		}
      	},
      	{
      		$match: {
      			remainder: {
      				$eq: 0
      			}
      		}
      	}
   ]
)

db.restaurants.find().sort( { cuisine: 1, locality: -1 } )

db.restaurants.find().sort( { name: 1, _id: 1 } )

db.restaurants.find(  		
 	{
      	"grade.score": {
      		$gt: 90
      	}
  	}
)


db.restaurants.find(  		
	{},
 	{
      	"grade.score": {
      		$gt: 90
      	},
      	"cuisine": {
      		$ne: "Mughlai"
      	}
  	}
)

db.restaurants.find(  		
	{},
 	{
      	"grade.grade": {
      		$eq: "A"
      	},
      	"cuisine": {
      		$ne: "Chinese"
      	},
      	"locality": {
      		$ne: "Jayanagar"
      	}
  	}
).sort(
	{
		cuisine: -1
	}
)

db.restaurants.find(
	{ 
		"name": { 
			"$regex": "ces\\b" 
		},
		_id: 1,
		name: 1,
		cuisine: 1
		borough: 1
	}
)

