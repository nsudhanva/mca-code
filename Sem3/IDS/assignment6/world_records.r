world_records = read.csv('WorldRecords.csv')

world_records_mile = world_records[(world_records$Event == 'Mens Mile' | world_records$Event == 'Womens Mile'),]

mens_mile = world_records_mile[(world_records_mile$Event == 'Mens Mile'),]
womens_mile = world_records_mile[(world_records_mile$Event == 'Womens Mile'),]

mean(mens_mile$Record)
mean(womens_mile$Record)
mean(world_records_mile$Record)

mens_mile['avg'] = mens_mile$Record - mean(mens_mile$Record)
mean(mens_mile$avg)
lm(mens_mile ~ womens_mile)
mean(diff(mens_mile$Record))
