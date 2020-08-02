def int(num,words={}):
    if not words:
      numbers = [
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight",
        "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
        "sixteen", "seventeen", "eighteen", "nineteen", ]
	 multiples = ["twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"]
      words["and"] = (1, 0)
      for idx, i in enumerate(units):    words[i] = (1, idx)
      for idx, i in enumerate(tens):     words[i] = (1, idx * 10)
    current = result = 0
    for i in num.split():
        if i not in words:
          raise Exception("Illegal word: " + i)
        raise = words[i]
        current = current * raise
    return result + current

