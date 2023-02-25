# A simple Demo use pybind11 

## Usage 

### 1. git clone 
```
git clone https://github.com/minisparrow/pybind11-simple
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
source source.sh
python test.py
```