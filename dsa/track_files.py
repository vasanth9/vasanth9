import os

file_extensions = ['cpp','py']

def extract_data(file):
	f = open(file,"r")
	link = f.readline().strip().split(" ")
	type = f.readline().strip().split(" ")
	concept  = f.readline().strip().split(" ")
	data = []

	if "link" in link:
		data.append(link[3])
	if "type" in type:
		data.append(type[3])
	if "concept" in concept:
		data.append(" ".join(concept).split(":")[1])

	return data

def rip_the_hyphen(file):
	extension = file.split(".")
	if len(extension) > 1:
		if extension[1] in file_extensions:
			extracted_data = extract_data(file)
			y = extension[0].split("-")
			return [' '.join(y[:-1]),y[-1],extracted_data,extension[1]]
			
	
	return ""
		

def write_to_md(data):
	f = open("README.md","w")
	f.write("# dsa\n\n")
	f.write("|S.No| Problem | Website | Difficulty | Concept |Solved In|\n")
	f.write("| ----------- | ----------- | ----------- | ----------- | ----------- | ----------- |\n")
	index = 0
	easy = 0
	medium = 0
	hard = 0
	total = 1
	for d in data:
		print(d)
		if len(d) > 2 :
			if len(d[2])>0:
				index+=1
				f.write("| {} | [{}]({}) | {} | {} |{}|{}|\n".format(index,d[0],d[2][0],d[1],d[2][1],d[2][2],d[3]))
				if "EASY" in d[2][1]:
					easy += 1
				elif "MEDIUM" in d[2][1]:
					medium += 1
				elif "HARD" in d[2][1]:
					hard += 1  
	total = easy+medium+hard
	f.write("\n")
	f.write("\n")
	f.write("![Progress](https://progress-bar.dev/{}/?title=easy)\n".format((easy*100)//total))
	f.write("![Progress](https://progress-bar.dev/{}/?title=medium)\n".format((medium*100)//total))
	f.write("![Progress](https://progress-bar.dev/{}/?title=hard)\n".format((hard*100)//total))
	f.close()

# List all files in the current directory
all_files = os.listdir()

# List only files, excluding directories
only_files = [f for f in os.listdir() if os.path.isfile(f)]
file_data = map(rip_the_hyphen,only_files)
write_to_md(file_data)
#print(list(file_data))
