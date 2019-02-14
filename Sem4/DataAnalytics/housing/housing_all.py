
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


# ## Get relevant features

# In[4]:


df = df[['price', 'lotsize', 'bedrooms', 'bathrms', 'stories', 'garagepl']]
X = df[['lotsize']]
y = df[['price']]


# ## Spilt into train and test set

# In[5]:


X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=0)


# ## Fitting the model

# In[6]:


regressor = LinearRegression()
regressor.fit(X_train, y_train)


# ## Predict on test set

# In[7]:


y_pred = regressor.predict(X_test)
y_pred[:10]

