read -p "Enter readme: " msg
echo "$msg" >> README.md
git init
git add .
read -p "Commit message: " commitMsg 
git commit -m "$commitMsg"
read -p "Url: " url
git remote add origin $url
git remote -v
read -p "Branch Name: " branchName
git push origin master $branchName