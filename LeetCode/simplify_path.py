def simplifyPath(path):
        """
        :type path: str
        :rtype: str
        """
        dirs = path.split('/')
        simplified = []
        prev = ""

        for dir in dirs:
            print(dir)
            if dir == "..":
                if len(simplified) > 0:
                    simplified.pop()
            else:
                if dir != '.' and dir != '' and dir != '..':
                    simplified.append(dir)

        print(simplified)
        final = ""
        for dir in simplified:
            if dir != '' and dir != '.' and dir != '..':
                final += ('/' + dir)

        if final =="":
            final = '/'

        return final
    

# path = "/home/"
# print(simplifyPath(path))
# # /home

# path = "/home//foo/"
# print(simplifyPath(path))
# # /home/foo

# path = "/home/user/Documents/../Pictures"
# print(simplifyPath(path))
# # /home/user/Pictures

# path = "/../"
# print(simplifyPath(path))
# # /

# path = "/.../a/../b/c/../d/./"
# print(simplifyPath(path))
# # /../b/d

# path = "/home/"
# print(simplifyPath(path))
# #/home

path = "/a/./b/../../c/"
print(simplifyPath(path))
# /c

# path = "/a/.."
# print(simplifyPath(path))
# # /

# path = "/a/../"
# print(simplifyPath(path))
# #/

# path = "/../../../../../a"
# print(simplifyPath(path))
# #/a

# path = "/a/./b/./c/./d/"
# print(simplifyPath(path))
# #/a/b/c/d

# path = "/a/../.././../../."
# print(simplifyPath(path))
# #/

# path = "/a//b//c//////d"
# print(simplifyPath(path))
# #/a/b/c/d