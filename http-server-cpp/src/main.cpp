#include "server.hpp"

HTTP_Response hello_handler(const HTTP_Request& req) {
    HTTP_Response res;
    res.status_code = 200;
    res.status_message = "OK";
    res.body = "Hi Nakshatra!";
    res.headers["Content-Type"] = "text/plain";
    return res;
}

int main() {
    HTTP_Server server(8080);               // Start server on port 8080
    server.route("/hello", hello_handler);  // Route for /hello
    server.run();                           // Start handling requests
    return 0;
}
