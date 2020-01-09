## What are binary and text files?

### Introduction
- On a computer, every file is a long string of ones and zeros. Specifically, a file is a finite-length sequence of bytes, where each byte is an integer between 0 and 255 inclusive (represented in binary as 00000000 to 11111111). Files can be broadly classified as either binary or text. These categories have different characteristics and need different tools to work with such files. Knowing the differences between binary and text files can save you time and mistakes when reading or writing data.

## Primary difference between `Binary files` and `Text files`
-  `Binary files` have no inherent constraints (can be any sequence of bytes), and must be opened in an appropriate program that knows the specific file format (such as Media Player, Photoshop, Office, etc.). 
-  `Text files` must represent reasonable text (explained later), and can be edited in any text editor program.

### all files are composed of bytes
- **Remember** that all files, whether `binary` or `text`, are composed of `bytes`. The difference between `binary` and `text` files is in how these bytes are interpreted. **Every text file is indeed a binary file**, but this interpretation gives us no useful operations to work with. The reverse is not true, and treating a binary file as a text file can lead to data corruption. As a method of last resort, a hex editor can always be used to view and edit the raw bytes(原始字节) in any file.
---


## File extensions
- We can usually tell if a file is binary or text based on its file extension. This is because by convention the extension reflects the file format, and it is ultimately the file format that dictates whether the file data is binary or text.
- Common extensions that are binary file formats:
    - Images: jpg, png, gif, bmp, tiff, psd, ...
    - Videos: mp4, mkv, avi, mov, mpg, vob, ...
    - Audio: mp3, aac, wav, flac, ogg, mka, wma, ...
    - Documents: pdf, doc, xls, ppt, docx, odt, ...
    - Archive: zip, rar, 7z, tar, iso, ...
    - Database: mdb, accde, frm, sqlite, ...
    - Executable: exe, dll, so, class, ...

- Common extensions that are text file formats:
    - Web standards: html, xml, css, svg, json, ...
    - Source code: c, cpp, h, cs, js, py, java, rb, pl, php, sh, ...
    - Documents: txt, tex, markdown, asciidoc, rtf, ps, ...
    - Configuration: ini, cfg, rc, reg, ...
    - Tabular data: csv, tsv, ...


### Binary file characteristics
- For most software that people use in their daily lives, the software consumes and produces binary files. Examples of such software include Microsoft Office, Adobe Photoshop, and various audio/video/media players. A typical computer user works with mostly binary files and very few text files.
- A binary file always needs a matching software to read or write it. For example, an MP3 file can be produced by a sound recorder or audio editor, and it can be played in a music player or audio editor. But an MP3 file cannot be played in an image viewer or a database software.
- Some binary formats are popular enough that a wide variety of programs can produce or consume it. Image formats like JPEG are the best example – not only can they be used in image viewers and editors, they can be viewed in web browsers, audio players (for album art), and document software (such as adding a picture into a Word doc). But other binary formats, especially for niche proprietary software, might have only one program in the world that can read and write it. For example, a high-end video editing software might let you save your project to a file, but this software is the only one that can understand its own file format; the binary file will never be useful anywhere else.
-
-
- **If you use a text editor to open a binary file, you will see copious amounts of garbage**, seemingly random accented and Asian characters, and long lines overflowing with text – this exercise is safe but pointless. However, editing or saving a binary file in a text editor will corrupt the file, so never do this. The reason corruption happens is because applying a text mode interpretation will change certain byte sequences – such as discarding NUL bytes, converting newlines, discarding sequences that are invalid under a certain character encoding, etc. – which means that opening and saving a binary file will almost surely produce a file with different bytes.



### Text file characteristics
- By convention, the data in every text file obeys a number of rules:
---




## Programming considerations
- Every practical programming language provides separate facilities for working with binary versus text files. Generally speaking, **if you read a binary file in text mode you will get unhelpful data that looks like garbage**, if you write a binary file in text mode it will probably be corrupt, if you read a text file in binary mode you can’t perform any useful text operations on the bytes, and **if you write a text file in binary mode you will need to manually convert characters to bytes**. So it pays to use the right tools for the right job. To illustrate with concrete examples, let’s look briefly at how binary vs. text files work in three popular programming languages.
    - In C, you specify `binary or text` mode when opening a file stream with fopen(). The only difference this makes is that in text mode, reading a newline sequence always converts from universal newlines on disk to '\n' in memory, and writing '\n' always produces the platform's preferred newline sequence for the file on disk (such as "\r\n"). **C only supports 8-bit characters**, so text mode does not actually help with interpreting file bytes as Unicode code points.
    - In Java, InputStream and OutputStream work with bytes, whereas Reader and Writer work with Unicode characters (as UTF-16). You can open a FileInputStream (which works with bytes), and create an InputStreamReader on top of it with a specific character encoding (such as UTF-8). Using this Reader, you can get the text characters in the file. An analogous process applies to writing text to a file.
    - In Python, you specify binary or text mode when opening a file stream with open(). In Python 3, if a file is opened in binary mode then read() and write() work with byte sequences of the bytes type. Otherwise a file as opened in text mode, then read() and write() apply a character encoding to convert the underlying bytes to/from a Unicode string of the str type. (The behavior is somewhat different in Python 2.)

