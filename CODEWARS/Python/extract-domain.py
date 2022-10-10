def domain_name(url):
    url = url.replace('http://', '').replace('https://', '').replace('www.', '')
    return url.split('.')[0]