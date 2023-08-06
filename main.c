#include "curl/curl.h"
#include "stdio.h"

typedef struct x {
    const char* url;
    CURLcode response;
    char* raw;

} REST;


void CURL_Init(REST *rest){
    CURL *curl;
    CURLcode res;
    curl_global_init(CURL_GLOBAL_ALL);

    curl = curl_easy_init();
    curl_easy_setopt(curl, CURLOPT_URL, rest->url);
    res = curl_easy_perform(curl);
    if (res != CURLE_OK) {
        printf("%s", "Invalid response.");
    }
    else {
        rest->response = res;
        printf("%s", "Request succeed.");
    }
}



int main() {

    REST rest;
    rest.url = "<url>";

    CURL_Init(&rest);

}
