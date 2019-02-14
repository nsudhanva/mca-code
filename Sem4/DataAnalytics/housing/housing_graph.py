
# coding: utf-8

# ## Import libraries

# In[1]:


import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

from sklearn import linear_model
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression


# ## Import dataset

# In[2]:


df = pd.read_csv('housing.csv', index_col=[0])


# In[3]:


df.head()


# ## Get price and lotsize

# In[5]:


df = df[['price', 'lotsize']]
X = df[['lotsize']]
y = df[['price']]


# ## Spilt into train and test set

# In[6]:


X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=0)


# ## Fitting the model

# In[7]:


regressor = LinearRegression()
regressor.fit(X_train, y_train)


# ## Predict on test set

# In[12]:


y_pred = regressor.predict(X_test)
y_pred[:10]


# ## House Lotsize vs Price

# In[9]:


plt.figure(figsize=(20,10))
plt.scatter(X_train, y_train, color='red')
plt.plot(X_train, regressor.predict(X_train), color='blue', linewidth=3)
plt.title('Housing Prices Dataset (Training set)')
plt.xlabel('House Lotsize')
plt.ylabel('House Price')
plt.show()


# In[10]:


plt.figure(figsize=(20,10))
plt.scatter(X_test, y_test, color='red')
plt.plot(X_test, regressor.predict(X_test), color='blue', linewidth=3)
plt.title('Housing Prices Dataset (Test set)')
plt.xlabel('House Lotsize')
plt.ylabel('House Price')
plt.show()

