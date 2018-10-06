class Time:
    def __init__(self):
        self.time = int(input('Enter time in seconds: '))

    def convert_time(self):
        full_hours = self.time * (1 / 3.6) * (1 / 1000)  
        hours = int(full_hours)
        left_hours = full_hours - hours
        full_minutes = left_hours * 60
        minutes = int(full_minutes)
        left_minutes = full_minutes - minutes
        full_seconds = left_minutes * 60
        seconds = int(full_seconds)
        left_seconds = full_seconds - seconds
        time_string = str(hours) +':' + str(minutes) + ':' + str(seconds)
        print('Time: ', time_string)
time = Time()
time.convert_time()