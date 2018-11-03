# -*- coding: utf-8 -*-

import matplotlib.pyplot as plt

plt.style.use('dark_background')
plt.title('My graph')
plt.xlabel('X Axis Label')
plt.ylabel('Y Axis Label')
plt.legend(['Yolo'], loc = 5)
plt.plot([1, 2, 4], [1, 3, 5], 'yellow')
plt.show()