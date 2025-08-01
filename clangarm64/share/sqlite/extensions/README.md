# Sqlite Extensions - Usage (Sqlite 3.50.3)

This folder contains shared libraries (dll files) `sqlite3.exe` can be
instructed to load at run-time in order to add functions usable in `sqlite3` SQL code.


Here an example of how to call an extension from the command line (example with
extension `csv`, other extensions are in this directory):

- open a shell (e.g. the `CLANGARM64` shell)
- call `sqlite3.exe` (residing in `/clangarm64/bin`)
- load the sqlite extension (use an absolute path in Windows notation, see below
  for an example of an absolute path)

~~~bash
    sqlite3
    sqlite3> .load "C:/msys64/clangarm64/share/sqlite/extensions/csv.dll"
~~~

Usage information to each extension is contained in the header of the c-file
corresponding to the extension you can find in this directory.


More information here: https://www.sqlite.org/loadext.html#loading_an_extension.
