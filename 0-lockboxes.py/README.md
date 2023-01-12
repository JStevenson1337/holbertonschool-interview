
### 0x00. Lockboxes
===============

## Requirements
------------

## General

*   Allowed editors: `vi`, `vim`, `emacs`
*   All your files will be interpreted/compiled on Ubuntu 14.04 LTS using `python3` (version 3.4.3)
*   All your files should end with a new line
*   The first line of all your files should be exactly `#!/usr/bin/python3`
*   A `README.md` file, at the root of the folder of the project, is mandatory
*   Your code should be documented
*   Your code should use the `PEP 8` style (version 1.7.x)
*   All your files must be executable

Tasks
-----

### 0\. Lockboxes

mandatory

You have `n` number of locked boxes in front of you. Each box is numbered sequentially from `0` to `n - 1` and each box may contain keys to the other boxes.

Write a method that determines if all the boxes can be opened.

*   Prototype: `def canUnlockAll(boxes)`
*   `boxes` is a list of lists
*   A key with the same number as a box opens that box
*   You can assume all keys will be positive integers
    *   There can be keys that do not have boxes
*   The first box `boxes[0]` is unlocked
*   Return `True` if all boxes can be opened, else return `False`

    carrie@ubuntu:~/0x00-lockboxes$ cat main_0.py
    #!/usr/bin/python3
    
    canUnlockAll = __import__('0-lockboxes').canUnlockAll
    
    boxes = [[1], [2], [3], [4], []]
    print(canUnlockAll(boxes))
    
    boxes = [[1, 4, 6], [2], [0, 4, 1], [5, 6, 2], [3], [4, 1], [6]]
    print(canUnlockAll(boxes))
    
    boxes = [[1, 4], [2], [0, 4, 1], [3], [], [4, 1], [5, 6]]
    print(canUnlockAll(boxes))
    
    carrie@ubuntu:~/0x00-lockboxes$
    

    carrie@ubuntu:~/0x00-lockboxes$ ./main_0.py
    True
    True
    False
    carrie@ubuntu:~/0x00-lockboxes$
    

**Repo:**

*   GitHub repository: `holbertonschool-interview`
*   Directory: `0x00-lockboxes`
*   File: `0-lockboxes.py`

Done?! Help

×

#### Students who are done with "0. Lockboxes"

Check your code

×

#### Correction of "0. Lockboxes"

Start a new test Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

Copyright © 2023 Holberton Inc, All rights reserved.

×

#### Markdown Guide

#### Emphasis

\*\***bold**\*\*
\*_italics_\*
~~strikethrough~~

#### Headers

\# Big header
## Medium header
### Small header
#### Tiny header

#### Lists

\* Generic list item
\* Generic list item
\* Generic list item

1. Numbered list item
2. Numbered list item
3. Numbered list item

#### Links

\[Text to display\](http://www.example.com)

#### Quotes

\> This is a quote.
> It can span multiple lines!

#### Images

CSS style available: `width, height, opacity`

!\[\](http://www.example.com/image.jpg)
!\[\](http://www.example.com/image.jpg | width: 200px)
!\[\](http://www.example.com/image.jpg | height: 124px | width: 80px | opacity: 0.6)

#### Tables

| Column 1 | Column 2 | Column 3 |
| -------- | -------- | -------- |
| John     | Doe      | Male     |
| Mary     | Smith    | Female   |

_Or without aligning the columns..._

| Column 1 | Column 2 | Column 3 |
| -------- | -------- | -------- |
| John | Doe | Male |
| Mary | Smith | Female |

#### Displaying code

\`var example = "hello!";\`

_Or spanning multiple lines..._

\`\`\`
var example = "hello!";
alert(example);
\`\`\`

(function(i,s,o,g,r,a,m){i\['GoogleAnalyticsObject'\]=r;i\[r\]=i\[r\]||function(){ (i\[r\].q=i\[r\].q||\[\]).push(arguments)},i\[r\].l=1\*new Date();a=s.createElement(o), m=s.getElementsByTagName(o)\[0\];a.async=1;a.src=g;m.parentNode.insertBefore(a,m) })(window,document,'script','//www.google-analytics.com/analytics.js','ga'); ga('create', 'UA-67152800-6', 'auto', { userId: '3579' } ); ga('send', 'pageview'); $(document).ready(function() { ga(function(tracker) { var clientId = tracker.get('clientId'); $('.ga-client-id').val(clientId); }); });
