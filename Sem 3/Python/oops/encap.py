class JsutCounter:
    __secretCount = 0

    def count(self):
        self.__secretCount += 1
        print(self.__secretCount)


counter = JustCounter()
counter.count()
counter.count()
# print(counter.__secretCount)
print(counter._JustCounter.__secretCount)


#public:normal variables
#private:__
#protected:_


