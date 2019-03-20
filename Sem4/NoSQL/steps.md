## srv is the folder

1. ```sudo chmod -R 777 /srv```
2. create the directories called test0, test1, test2 that will contrain the instances and database files
   1. create the directoies using ```mkdir```
   2. ```mkdir -p /srv/mongodb/test0```
   3. ```mkdir -p /srv/mongodb/test1```
   4. ```mkdir -p /srv/mongodb/test2```
3. Open another two terminal to start the mongod server (Kannada -> English = Kanglish)
* ```mongod --port 27040 --dbpath/srv/mongodb/test0 --replSet test --smallfiles --oplogSize 128```
* ```mongod --port 27041 --dbpath/srv/mongodb/test1 --replSet test --smallfiles --oplogSize 128```
* ```mongod --port 27042 --dbpath/srv/mongodb/test2 --replSet test --smallfiles --oplogSize 128```
4. Open another 3 terminals to start the mongo shell
* ```mongo --port 27040```
* ```mongo --port 27041```
* ```mongo --port 27042```

5.  First set up config
```javascript
config_test = {
    "_id": "test",
    members: [
        { _id: 0, host: "127.0.0.1:27040" },
        { _id: 1, host: "127.0.0.1:27041" },
        { _id: 2, host: "127.0.0.1:27042" }]
}
```
* Then initiate
```rs.initiate('test')```

* Terminal 5: 
```db.getMongo().setSlaveOk()```
* Terminal 6: 
```db.getMongo().setSlaveOk()```

```db.shutdownServer()```