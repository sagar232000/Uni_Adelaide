all: run

run:
	make clean
	g++ -std=c++11 *.cpp -o out
	./out
git:
	make clean
	git add *
	git ci -m "updates"
	git push

ci:
	make clean
	rm -rf out
	svn update
	git pull
	svn ci -m "changes"
	git add *
	git commit -m "changes"
	git push
clean:
	rm -rf out