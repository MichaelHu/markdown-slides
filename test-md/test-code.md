`<Router routes>`: 需要正确解析才可以

@s
start: `code1`, end

`\`code2\``

@s
`\`code 
newline code\``

`\\abc\r\n`

@s
`` `code3` ``

@s
``
console.log('javascript');
``

@s
```
console.log('javascript');
```

@s
`@[class="fragment"]window.alert(123);`

@s
`@[class="fragment"\]window.alert(123);`

## code

> c code

    #include <stdio.h>
    int main(void) {
        print("Hello, World!\n");
    }

* c code

        #include <stdio.h>
        int main(void) {
            print("Hello, World!\n");
        }

    the above is c code.

    * js code
        
            $('#tip').html('<b>Hello</b>');

        the above is js code.

```
#list {
    height: 30px;
    color: #999;
    font-size: 30px;
    line-height: 1.2;
}
```
    

```
* abc
* 123
