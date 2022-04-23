#import cx_Oracle
#from translate import translator
import goslate
import requests
import urllib
import json


def translate_string(string,language):
    "write a string variable to a file"
    "create the file called translated.txt"
    url = "https://microsoft-translator-text.p.rapidapi.com/translate"
    querystring = {"to":language,"api-version":"3.0","profanityAction":"NoAction","textType":"plain"}
    payload = [{"Text": string}]
    headers = {
        "content-type": "application/json",

        "X-RapidAPI-Host": "microsoft-translator-text.p.rapidapi.com",
        "X-RapidAPI-Key": "953c5451bdmshbce89d725030781p1af98ajsn06a40ab2efb5"
    }
    response = requests.request("POST", url, json=payload, headers=headers, params=querystring)
    json_format = response.json()
    f = open("../myproject/translated.txt", "w")
    f.write(json_format[0]['translations'][0]['text'])
    f.close()

with open('../myproject/translate.txt', 'r') as file:
    string = file.read().replace('\n', '')
with open('../myproject/language.txt', 'r') as file:
    language = file.read().rstrip()

translate_string(string,language)
