
# coding: utf-8

# In[1]:


import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import math
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split
from sklearn.metrics import mean_squared_error


# In[2]:


df = pd.read_csv('cars.csv')


# In[3]:


df.head()


# In[4]:


df.describe()


# In[5]:


plt.scatter(df['wt'], df['hp'])
plt.show()


# In[6]:


X = df['wt']
y = df['hp']


# In[7]:


X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=0)


# In[8]:


regressor = LinearRegression()
regressor.fit(np.array(X_train).reshape(-1, 1), np.array(y_train).reshape(-1, 1))


# In[9]:


y_pred = regressor.predict(np.array(X_test).reshape(-1, 1))


# In[10]:


y_pred[:10]


# In[11]:


mean_squared_error(y_pred, y_test)


# In[12]:


rmse = math.sqrt(mean_squared_error(y_pred, y_test))


# In[13]:


rmse

