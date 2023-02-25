# A simple Demo use pybind11 

## Usage 

### 1. git clone 
```
git clone ...
git submodule update --init --recursive 
```

### 2. a virtual environment for your special python version lib 

```
python3.8 -m venv env38
source env38/bin/activate 
```


### 3. build library
```
 mkdir build 
 cmake .. && make  
```
### 4. python test 

```
cd ..
python test.py
```