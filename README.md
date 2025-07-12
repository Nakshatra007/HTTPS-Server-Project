# 🧠 Simple C++ HTTP Server

A lightweight HTTP server built from scratch in modern C++ using sockets, threads, and STL — no external libraries.  
It supports basic routing, request parsing, and response generation (with optional gzip-aware request handling logic).

---

## 🚀 Features

- 📡 Listens for HTTP requests on a configurable port
- 🔄 Handles multiple concurrent clients using threads
- 🌐 Supports `GET` and `POST` requests
- 📁 Basic file I/O support (read/write files)
- 🧭 Custom route handling via `server.route(...)`
- 🔍 Parses headers, body, version, and method
- ⚙️ Detects gzip support via `Accept-Encoding` header

---
