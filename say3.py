import sys
nums = ["", "three", "four",  "five", "six", "seven", "eight", "nine "]
teens = ["", "eleven", "twelve", "thirteen",  "fourteen",
    "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"]
tens = ["", "ten", "twenty", "thirty", "forty",
    "fifty", "sixty", "seventy", "eighty", "ninety"]
thousands = ["","thousand", "million",  "billion",  "trillion"]
def num_to_words():
    n= int(input("Enter number to convert: "))
    words = ""
    if n == 0:
        words += "zero"
    else:
        numStr = "%d" % n
        groups = (len(numStr) + 2) // 3
        numStr = numStr.zfill(groups * 3)
        for i in range(0, groups*3, 3):
            h = int(numStr[i])
            t = int(numStr[i+1])
            u = int(numStr[i+2])
            g = groups - (i // 3 + 1)
            if h >= 1:
                words += nums[h]
                words +=  " hundred "
                words+=" "
                if int(numStr) % 100:
  # if number  modulo 100 has remainder  add "and" i.e one hundred and ten
                    words+=" and "
            if t > 1:
                words+= tens[t]
                if u >= 1:
                    words+= nums[u]
                    words+=" "
            elif t == 1:
                if u >= 1:
                    words+= teens[(u)]
                else:
                    words+= tens[t]
                    words+=" "
            else:
                if u >= 1:
                    words+= nums[u]
                    words+=" "

            if g >= 1 and (h + t + u) > 0:
                words+= thousands[g]
                words+=" "
    return words
