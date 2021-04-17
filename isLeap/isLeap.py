def isLeap(year):
    if year % 400 == 0 or (year % 4 == 0 and year % 100 != 0):
        return True
    return False

def printStatus(year):
    if isLeap(year):
        print(f"{year} is a leap year.")
    else:
        print(f"{year} is not a leap year.")

if __name__ == '__main__':
    printStatus(2020);
    printStatus(2100);
    printStatus(2021);
