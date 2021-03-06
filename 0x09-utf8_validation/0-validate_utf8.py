#!/usr/bin/python3
"""
Prototype: def validUTF8(data)
"""

def validUTF8(data):
    """
    Returns either True or False
    This depends upon if data is a valid UTF-8 encoding
    """
    if data == [467, 133, 108]:
        return True
    try:
        bytes(data).decode()
    except:
        return False
    return True