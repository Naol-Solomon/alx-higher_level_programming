#!/bin/bash
#sends a GET request to the URL using curl, and displays the body of the response for a 200 status code
curl -s -o tmp_body_response -w "%{http_code}" "$1" && if [[ $(cat tmp_body_response) -eq 200 ]]; then cat tmp_body_response; fi && rm tmp_body_response

