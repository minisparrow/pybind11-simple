import robot 

rt = robot.Robot("alice", robot.chat)
rt.do_task("pick up a bootle.")
print(rt.name)

rt.name = "bob "
rt.do_task("take taxi.")
print(rt.name)

c = rt.add(2,3)
print("add result is: ", c)

c = rt.sub(2,3)
print("sub result is: ", c)

c = rt.mul(2,3)
print("mul result is: ", c)

print(rt.func_type)