# eclipse 安裝
* [Eclipse IDE for C/C++ Developers](http://www.eclipse.org/downloads/eclipse-packages/)

## java JDK
1. Open Terminal from Application Dash or press Ctrl+Alt+T
2. Update repository:
```
  $ sudo add-apt-repository ppa:openjdk-r/ppa
  $ sudo apt-get update
```
3. Run the following command in Terminal:
```
  $ sudo apt-get install openjdk-8-jdk
  $ sudo apt-get install openjdk-8-source #this is optional, the jdk source code
```
4. Type commandline as below...
```
  $ apt-cache search jdk
```
5. For "JAVA_HOME" (Environment Variable) type command as shown below, in "Terminal" using your installation path...
```
  $ export JAVA_HOME=/usr/lib/jvm/java-8-openjdk
```
6. For "PATH" (Environment Variable) type command as shown below, in "Terminal" using your installation path...
```
  $ export PATH=$PATH:/usr/lib/jvm/java-8-openjdk/bin
```
7. Check for "open jdk" installation, just type command in "Terminal" as shown below
```
  $ javac -version
```
## eclipse環境設定
```
  $ cd eclipse/dropins
  $ find /opt/intel -name 'CodeBuilder*.jar' -exec cp {} . \;
```
