
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
