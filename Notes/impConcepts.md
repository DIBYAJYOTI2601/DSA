
| Name | Age |
|------|-----|
| John | 25  |
| Amy  | 22  |


### Stateless
A stateless system does not store any past data; every request is handled independently (no memory of previous interactions).

### stateful
A stateful system remembers past data or context, so future requests depend on previous interactions.

## server 
- A server is a computer or program that provides data, services, or resources to other computers (clients) over a network.
eg : When you open a website, your browser (client) sends a request, and the server sends back the webpage data.

### serverless computing 
Serverless computing means you don’t manage or run servers yourself — the cloud provider (like AWS) automatically handles servers, scaling, and infrastructure.
Server starts only when a request comes

simple analogy of server vs serverless is owning a car vs booking a uber 

- #### How it works
  - You write a function (Python, Node.js, Java, etc.)
Upload it to AWS Lambda
A trigger occurs:

  - API call (via API Gateway)
File upload (S3)
Database change

  - Lambda executes your code
It stops after execution (no server running continuously)


## API (Apllication Programming Interface)
API (Application Programming Interface) is a way for two systems to communicate with each other.

### REST API
REST API is a type of API that follows REST principles and uses HTTP methods.
Common methods:
-GET → fetch data
-POST → create data
-PUT → update data
-DELETE → delete data
***REST = guidelines, RESTful API = implementation of those guidelines***

###  SOAP API
Uses XML
More secure, but heavy and complex
eg:Used in banking / enterprise apps

### GraphQL API
Client can request exact data needed
``` 
{
  user {
    name
    email
  }
}
```
### 4. WebSocket API

Real-time communication
Used in:Chat apps,Live notifications,Gaming

### gRPC API

High-performance communication using protocol buffers
Used in: Microservices
Backend-to-backend communication

### IPv4
IPv4 (Internet Protocol version 4) is a 32-bit address system used to identify devices on a network.
Components of IPv4:
An IPv4 address has 2 main parts:
- Network Part
  - Identifies the network
  - All devices in the same network share this part
- Host Part
  -Identifies the specific device within that network
Example: 192.168.1.1
- 192.168.1 → Network
- 1 → Host
**all the device in the same network will share the same host address ie:1


### IPv6 
(Internet Protocol version 6) is a 128-bit address system designed to replace IPv4 and provide a much larger number of IP addresses.

components :
- Network Prefix
  - Identifies the network portion
  - Similar to IPv4 network part
-Interface Identifier
  - Identifies the device (host) on that network

Example: 2001:0db8:85a3:0000:0000:8a2e:0370:7334
- 2001:db8:: → Network Prefix
- 1 → Interface (device)


### NAT(network Address Translation)
NAT (Network Address Translation) is a technique used by routers to map private IPs to a public IP so devices in a local network can communicate with the internet.

***how nats work***
- Your device: 192.168.1.10:5000
- Router (public IP): 47.32.10.5
- When you send a request:
    Router changes it to: 47.32.10.5:6000 → internet

- Router stores mapping: 6000 → 192.168.1.10:5000
- When response comes back: 47.32.10.5:6000
- Router checks mapping and sends it to: 192.168.1.10:5000 ✅

hence NAT uses the router to replace private IP with public IP and track devices using port numbers.

### Type DNS server and how they work
***DNS*** translates ip to a human redable domain 
types:
- Recursive Resolver:
Handles the user request and queries other DNS servers to find the correct IP.
- Root DNS Server:
Directs the request to the appropriate TLD server (like .com, .org).
- TLD Server:
Points to the authoritative server for the specific domain.
- Authoritative DNS Server:
Returns the final IP address of the requested domain.

***DNS works like a chain: Resolver → Root → TLD → Authoritative (final IP).***

***how they work :-***
1 You type: google.com
2 Resolver → Root server
3 Root → says “go to .com server”
4 TLD-Top-Level Domain (.com) → says “ask Google’s DNS server”
5 Authoritative server → gives real IP ✅

### caching
Caching is the process of storing frequently used data in a temporary space so it can be accessed faster next time instead of fetching it again.

TTL(time to live) time till which a cache is alive/valid

### Types of Communication
- Request–Response: A communication model where the client sends a request and the server sends back a single response, after which the connection can close
.(e.g., HTTP/REST)
- Persistent:A communication model where the connection remains open, allowing continuous two-way data exchange.
 (e.g., WebSocket)

### async vs sync communication
In synchronous communication, the sender waits for the response before continuing.
In asynchronous communication, the sender does not wait for the response and can continue other work.

### what is a proxy ?

**Proxy:** A proxy is a middle server between client and server that forwards requests.
Example:Browser → Proxy → Website
**Forward Proxy**:
Used on client side, sends user requests to the internet and hides client identity.
Example:
Your PC → Office Proxy → google.com
**Reverse Proxy**:
Used on server side, receives requests and forwards them to backend servers.
Example:
User → Reverse Proxy → App Server

**Difference**
Forward proxy hides the client from the internet.  
Reverse proxy hides the server from the client.


Where used:
Forward proxy → security, filtering (office networks)
Reverse proxy → load balancing, security (web apps like Amazon)

**SSL (Secure Sockets Layer)**:
Encrypts data between client and server so it is secure.
Example:
https://google.com (data is encrypted)


**SSL Login**  
 login credentials (username, password) are sent over an encrypted HTTPS connection so they cannot be intercepted.  
Example:  
User enters password → sent via HTTPS → encrypted → server receives securely


### OSI Model (Open Systems Interconnection) 
A 7-layer model that explains how data moves from one device to another over a network, with each layer performing a specific function.

---

**Layer 7 – Application Layer**  
Interacts directly with end-user applications and provides network services.  
Protocols: HTTP, HTTPS, FTP, SMTP, DNS  
Example: Opening a website, sending an email  
Role: Takes user request (like browser request) and starts communication  

---

**Layer 6 – Presentation Layer**  
Handles data formatting, encryption, and compression.  
Protocols/Tech: SSL/TLS, JPEG, MP3 formats  
Example: Encrypting data in HTTPS, converting data formats  
Role: Ensures data sent by one system can be understood by another  

---

**Layer 5 – Session Layer**  
Manages sessions (connection establishment, maintenance, termination).  
Example: Keeping a user logged in to a website  
Role: Opens, maintains, and closes communication sessions between devices  

---

**Layer 4 – Transport Layer**  
Provides reliable or fast data transfer with error handling and flow control.  
Protocols: TCP (reliable), UDP (fast)  
Example: TCP ensures all packets reach correctly; UDP used in streaming  
Role: Breaks data into segments and ensures correct delivery  

---

**Layer 3 – Network Layer**  
Handles logical addressing and routing of packets between networks.  
Protocols: IP (IPv4, IPv6), ICMP  
Example: Routers deciding best path for data  
Role: Determines where to send data across networks  

---

**Layer 2 – Data Link Layer**  
Handles communication between devices on the same network using MAC addresses.  
Protocols: Ethernet, ARP  
Example: Data transfer within same Wi-Fi or LAN  
Role: Frames data and ensures error-free transfer in local network  

---

**Layer 1 – Physical Layer**  
Deals with physical transmission of raw bits over a medium.  
Examples: Cables, switches, electrical signals, Wi-Fi signals  
Role: Converts data into signals (electrical/optical/radio)  

---

**Data Flow (end-to-end example):**  
User opens website → Application → Data formatted/encrypted → Session created → Data split (TCP) → Routed (IP) → Sent via MAC → Transmitted physically  

---


###  session and cookies 

**Cookies**  
Cookies are small pieces of data stored in the user's browser by a website.  
They are sent back to the server with every request.

Example:  
You visit a website → it stores a cookie like `userId=123`  
Next request → browser sends cookie → server पहचान user  

Use case: Remember login, preferences, tracking  

---

**Session**  
A session is data stored on the server that keeps track of a user across multiple requests.

Example:  
User logs in → server creates session → session ID is stored in browser (cookie)  
Next request → session ID is sent → server fetches user data  

Use case: Secure login management, user state  

---

**Key Difference**  
Cookies → stored in browser (client-side)  
Session → stored on server (server-side)  



### What is JWT (JSON Web Token)
JWT is a compact, secure token used to transmit information (like user identity) between client and server.  
It is commonly used for authentication and authorization.

---

**Where is JWT stored?**  
JWT is usually stored on the client side:

- Local Storage (most common)
- Session Storage
- Cookies (more secure if HttpOnly)

Example:  
Browser stores JWT → sends it in headers for each request:
Authorization: Bearer <token>

---

**Structure of JWT Token**  
A JWT has 3 parts separated by dots:

header.payload.signature

Example:
xxxxx.yyyyy.zzzzz

---

**1. Header**  
Contains metadata about the token (type and algorithm)

Example:
{
  "alg": "HS256",
  "typ": "JWT"
}

---

**2. Payload**  
Contains actual data (called claims)

Example:
{
  "userId": "123",
  "role": "admin",
  "exp": 1712345678
}

Types of data:
- user info
- permissions
- expiry time

---

**3. Signature**  
Ensures the token is not tampered with

Created using:
HMACSHA256(
  base64UrlEncode(header) + "." + base64UrlEncode(payload),
  secret_key
)

---

**How JWT is Created (Step-by-step)**  

1. User logs in  
   → sends username & password  

2. Server validates credentials  

3. Server creates:
   - header
   - payload (userId, role, expiry)

4. Server encodes them (Base64)

5. Server generates signature using secret key  

6. Combines all:
   header.payload.signature  

7. Sends JWT to client ✅  

---

**How JWT is Used (Flow)**  

1. Client sends request with token:
   Authorization: Bearer <JWT>

2. Server:
   - verifies signature using secret key
   - checks expiry
   - extracts user info from payload  

3. If valid → request allowed ✅  

---

**Key Advantages**  
- Stateless (no session stored in server)  
- Scalable (no memory for sessions)  
- Fast verification  

---

**Important Note**  
JWT is not encrypted by default (only encoded),  
so sensitive data should not be stored directly in payload.


### what is load balacing ?

Load balancing is the process of distributing incoming requests across multiple servers so that no single server gets overloaded.

#### Load balancing strategies

**Static load balancing** (no real-time data, fixed logic)
- **Round Robin** → requests are distributed one by one to each server in order  
- **Least Connection** → server with fewer active connections gets the request  
- **IP Hashing** → same client IP always goes to the same server  

---

**Dynamic load balancing** (uses real-time server info)
- **Least Response Time** → server with fastest response is chosen  
- **Adaptive Load Balancing** → adjusts based on server health and performance  
- **Weighted Load Balancing** → stronger servers get more requests based on assigned weight  




### API gateway :
An API Gateway is a single entry point that receives client requests and routes them to the appropriate backend services.

What it does:  
- Routes requests  
- Handles authentication  
- Rate limiting  
- Load balancing  
- Monitoring


*DDoS Attack (Distributed Denial of Service)**  
A DDoS attack floods a server with massive traffic from many sources to make it slow or crash.

TLS (Transport Layer Security):
TLS is a protocol that encrypts data between client and server to ensure secure communication.

Rate Limiting:
Rate limiting restricts the number of requests a client can make in a given time period.

Throttling:
Throttling controls the speed or rate of requests by slowing down or limiting excess traffic instead of completely blocking it.

### what is Nginx ?
Nginx (pronounced “engine-x”) is a high-performance web server that also works as a reverse proxy, load balancer, and API gateway to handle and distribute incoming web traffic efficiently.
Example:**User → Nginx → Backend servers (Node.js / .NET / etc.)**

### CDN (Content Delivery Network) 
A CDN is a network of distributed servers that deliver content (images, videos, files) from the nearest location to the user for faster loading.

**Example: Cloudinary**  
Cloudinary is a CDN-based service for images and videos.  
- Stores media  
- Optimizes (resize, compress)  
- Delivers from nearest server


**Edge Network (in CDN)**  
An edge network consists of multiple servers (edge servers) located in different geographic locations close to users.
It stores cached content on these edge servers so users get data from the nearest location instead of the main server

