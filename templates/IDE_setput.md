## IDE Setup

### Sublime Build file:
```cpp
{
    "cmd": ["g++.exe", "-std=c++17", "${file}",
            "-o", "${file_base_name}.exe",
            "&&", "${file_base_name}.exe<input.txt>output.txt"],
    "shell":true,
    "working_dir":"$file_path",
    "selector":"source.cpp"
}
```
### Save it as "c++17.sublime-build" file

### Snippet:
```cpp
<snippet>
  <content><![CDATA[
#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

	

}

signed main(){
	fast;
	int t = 1;
	//cin >> t;
	while(t--){solve();}
	return 0;
}
]]></content>
  <tabTrigger>cp</tabTrigger>
  <description>source.c++</description>
</snippet>
```
### Save it as "cp.sublime-snippet" file.

#
#

### VsCode C++17 build file:
```json
{
  "tasks": [
    {
      "type": "cppbuild",
      "label": "C/C++: g++ build active file",
      "command": "/usr/bin/g++",
      "args": [
        "-std=c++17",
        "-I",
        "${fileDirname}",
        "-g",
        "${fileDirname}/*.cpp",
        "-o",
        "${workspaceFolder}/out/${fileBasenameNoExtension}.o"
      ],
      "options": {
        "cwd": "${workspaceFolder}"
      },
      "problemMatcher": ["$gcc"],
      "group": {
        "kind": "build",
        "isDefault": true
      }
    }
  ],
  "version": "2.0.0"
}
```

### VsCode Snippet:
```json
"": {
	"prefix": "cp",
	"body": [
		"#include<bits/stdc++.h>",
		"#define int long long int",
		"#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);",
		"using namespace std;",
		"",
		"void solve(){",
		"",
		"    $0",
		"",
		"}",
		"",
		"signed main(){",
		"    fast;",
		"    int t = 1;",
		"    //cin >> t;",
		"    while(t--){solve();}",
		"    return 0;",
		"}"
	],
	"description": ""
	}
```